class A{
    private:    
        int a_ka_private;
    protected:  
        int a_ka_protected;
    public:     
        int a_ka_public;
};

class B : protected A{ //B ke paas a_ka_protected bhi h and a_ka_public bhi h but both are as protected in B
    public:
        int b_ka_public;

    void show(){
        a_ka_protected=5;
    }
};

class C : public B{ //C ke paas b_ka_public aayega--> as public, a_ka_protected and a_ka_public aayega  -->as protected
    public:
        int c_ka_public;

        void show(){
            a_ka_public;
        }
};

int main(){
    C c;
    c.b_ka_public;
    c.c_ka_public;
}
