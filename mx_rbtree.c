#include <stdlib.h>
#include <stdio.h>

#include "mx_rbtree.h"

static inline void rb_set_black(struct rb_node* rb)
{
    rb->__rb_parent_color |= RB_BLACK;
}

static inline void rb_set_red(struct rb_node* rb)
{
    rb->__rb_parent_color |= RB_RED;
}


