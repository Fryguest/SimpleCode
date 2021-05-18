class FooBar {
private:
    int n;
    int a =0,b=0;

public:
    FooBar(int n) {
        this->n = n;
    }

    void foo(function<void()> printFoo) {
        for (int i = 0; i < n; i++) {
            while (a>b){std::this_thread::yield();}
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
            a++;
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            while (b>=a){std::this_thread::yield();}
        	// printBar() outputs "bar". Do not change or remove this line.
        	printBar();
            b++;
        }
    }
};
