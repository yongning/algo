#ifndef _MX_RBTREE_H_
#define _MX_RBTREE_H_

#define RB_RED 0
#define RB_BLACK 1

struct rb_node {
    unsigned long __rb_parent_color;
    struct rb_node* rb_right;
    struct rb_node* rb_left;
};

struct rb_root {
    struct rb_node* rb_node;
};

struct rb_root_cached {
    struct rb_root rb_root;
    struct rb_node* rb_leftmost;
};



#endif
