struct list {
    int info;
    struct list *next;
};
void print_list(struct list* my_list);//prints list
struct list* push_front(struct list *my_list, int value);//adds number to front
struct list* push_back(struct list* my_list, int value);//adds number to back
struct list* deletelem(struct list * my_list);//deletes first element
void dispose_list(struct list* my_list); //nukes the list
