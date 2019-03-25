#include <stdlib.h>
#include <stdio.h>

#include "mx_rbtree.h"

static inline void rb_set_black(struct rb_node* rb)
{
    rb->__rb_parent_color |= RB_BLACK;
}

static inline struct rb_node* rb_red_parent(struct rb_node* red)
{
	return (struct rb_node*)red->__rb_parent_color;
}

static void __rb_insert(struct rb_node* node, struct rb_root* root,
				        bool newleft, struct rb_node** leftmost,
						void (*augment_rotate)(struct rb_node* old,
							  struct rb_node* new))
{
	struct rb_node* parent = rb_red_parent(node);
    struct rb_node *gparent, *tmp;
    if (newleft)
		*leftmost = node;

	while (true) {
        
		if (!parent) {
			rb_set_parent_color(node, NULL, RB_BLACK);
			break;
		}

        if (rb_is_black(parent))
			break;

		gparent = rb_red_parent(parent);

	}

}

void rb_insert_color(struct rb_node* node, struct rb_root* root)
{
	__rb_insert(node, root, false, NULL, dummy_rotate);
}
