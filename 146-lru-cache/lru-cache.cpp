class LRUCache {
public:
    // dll node
    class Node {
    public:
        int key, value;
        Node* next;
        Node* prev;
        // constructor to easify init ops
        Node(int k, int v) {
            key = k;
            value = v;
            prev = next = nullptr;
        }

    };
    int capac;
    unordered_map<int, Node*> x;
    Node* head;
    Node* tail;

    // helper to help remove
    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    // insert always at the end for mru posi
    void insert(Node* node) {
        Node* previous = tail->prev;
        previous->next = node;
        node->prev = previous;

        node->next = tail;
        tail->prev = node;
    }
    LRUCache(int capacity) {
        capac = capacity;
        tail = new Node(-1, -1); // dummy
        head = new Node(-1, -1);

        tail->prev = head;
        head->next = tail;
    }
    int get(int key) {
        // we need o1 so we will be using hashmaps
        if (x.find(key) == x.end()) {
            return -1;
        }
        Node* node = x[key];
        remove(node);
        insert(node);
        return node->value;
    }
    // o1 to insert/delete while maintaining order dll
    void put(int key, int value) {
        if (x.find(key) != x.end()) {
            Node* node = x[key];
            node->value = value;

            remove(node);
            insert(node);
            return;
        }
        if (x.size() == capac) {
            Node* lru = head->next;
            remove(lru);
            x.erase(lru->key);
            delete lru;
        }
        Node* node = new Node(key, value);
        insert(node);
        x[key] = node;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */