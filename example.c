
int a = 1;

// add(1, 2.0)

/*
    Hello!!
*/

// class Actor

// @test
void assert_test() {
    ASSERT_EQ(a, b);
}

int add(const int* a, const int* b) {
    return *a + *b;
}

const char MAGIC = L"FFFFFFFF";

typedef struct _tagActor {
    int x;
    int y;
    union {
        void* id;
        void* name;
    };
} Actor;

enum ActorID {
    GLOBAL,
    SPECIAL = 1,
    PLAYER,
};

extern void test(char*);
extern int i;

int main() {
    int a = 1;
    int b = 2.0;
    unsigned char max = 255;
    char c = 't';
    char* s = (char*)malloc(10);
    int (*f)(int, int) = &add;
    struct Actor* actor = { 0, 0, &c };
    a += add(1, 2 + (1 - 1));
    for (int i = 0; i < 10; i++) {
        printf("%d\n", a);
    }
    for (;;) {
        printf("%s\n", a);
    }
    if (a > b) {
        printf("%d\n", a);
    }
    while (false) {
        printf("%d\n", a);
    }
    do {
        printf("%d\n", a);
        printf("%d\n", b);
    } while (false);
    return 0;
}

generate_test();
