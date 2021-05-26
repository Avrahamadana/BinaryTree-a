using namespace std;
namespace ariel
{
    template <typename T>
    class BinaryTree
    {
        struct Node
        {
            friend class BinaryTree;
            T data;
            Node *left;
            Node *right;
            Node *parent;

            Node(T d) : data(d), left(nullptr), right(nullptr), parent(nullptr){};
        };

    private:
        Node *root;

    public:
        BinaryTree() : root(nullptr){};
        BinaryTree &add_root(T node)
        {
            root = new Node(node);
            return *this;
        }
        BinaryTree &add_left(T curr, T child)
        {
            return *this;
        }
        BinaryTree &add_right(T curr, T child)
        {
            return *this;
        }
        friend ostream &operator<<(ostream &stream, BinaryTree<T> &tree)
        {
            return stream;
        }

        class InOrderIterator
        {
        private:
            Node *node;

        public:
            InOrderIterator(Node *node = nullptr) : node(node){};
            bool operator==(const InOrderIterator &other) const
            {
                return true;
            }
            bool operator!=(const InOrderIterator &other) const
            {
                return false;
            }
            InOrderIterator &operator++()
            {
                return *this;
            }
            // const InOrderIterator &operator++(int)
            // {
            //     return *this;
            // }
            T &operator*()
            {
                return node->data;
            }
        };

        InOrderIterator begin_inorder()
        {
            return InOrderIterator{root};
        }
        InOrderIterator end_inorder()
        {
            return InOrderIterator{nullptr};
        }
        InOrderIterator begin()
        {
            return InOrderIterator{root};
        }
        InOrderIterator end()
        {
            return InOrderIterator{nullptr};
        }

        class PostOrderIterator
        {
        private:
            Node *node;

        public:
            PostOrderIterator(Node *node = nullptr) : node(node){};
            bool operator==(const PostOrderIterator &other) const
            {
                return true;
            }
            bool operator!=(const PostOrderIterator &other) const
            {
                return false;
            }
            PostOrderIterator &operator++()
            {
                return *this;
            }
            T *operator->() const
            {
                return &(node->data);
            }
            T &operator*()
            {
                return node->data;
            }
        };

        PostOrderIterator begin_postorder()
        {
            return PostOrderIterator{nullptr};
        }
        PostOrderIterator end_postorder()
        {
            return PostOrderIterator(nullptr);
        }

        class PreOrderIterator
        {
        private:
            Node *node;

        public:
            PreOrderIterator(Node *node = nullptr) : node(node){};
            bool operator==(const PreOrderIterator &other) const
            {
                return true;
            }
            bool operator!=(const PreOrderIterator &other) const
            {
                return false;
            }
            PreOrderIterator &operator++()
            {
                return *this;
            }
            T &operator*()
            {
                return node->data;
            }
        };
         PreOrderIterator begin_preorder()
        {
            return PreOrderIterator{nullptr};
        }
        PreOrderIterator end_preorder()
        {
            return PreOrderIterator(nullptr);
        }
    };
};
