//student.h
class Student{
public:
    void display();
    Student();
    Student(int num, char *name, char sex);

private:
    int num;
    char name[20];
    char sex;

    void set_value(int num = 0, char *name = {"null"}, char sex = 'n'){
        this->num = num;
        this->sex = sex;

        int it = 0;
        while (*name != '\0') {
            if (it >= 20) break;
            this->name[it] = *name;
            *name++;
            it++;
        }
    }
};
