typedef struct glist glist;
typedef struct glroot glroot;

struct glroot {
	int count;
	struct glist *first_node;
};

struct glist {
  int number;
  int fd;
  int chk_fd;
  int flg;
  int field[3][3];
  struct glist *ptr;
};

struct glroot* ginit();
struct glist* gaddelem(glroot *root, int number, int sockfd);
struct glist* gdeletelem(glist *lst, glroot *root);
void glistprint(glroot *root);
struct glist* glistfind(glroot *root, int number);
