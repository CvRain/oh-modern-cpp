#include <iostream>
#include <memory>
#include <string>
class Student
{
public:
    Student() = delete;
    Student(const std::string &name, const std::string &id)
        : stu_name(name), stu_id(id)
    {
    }
    std::string GetName() const
    {
        return stu_name;
    }
    std::string GetId() const
    {
        return stu_id;
    }
    std::string GetCollege() const
    {
        return stu_college;
    }
    void SetCollage(const std::string college)
    {
        stu_college = college;
    }

private:
    const std::string stu_name;
    const std::string stu_id;
    std::string stu_college{};
};

int main()
{
    auto student = std::make_unique<Student>("田所浩二", "114514");
    std::cout << student->GetId() << std::endl;
    std::cout << (*student).GetName() << std::endl;
    auto ptr_stu = student.get(); // if smart pointer is released, this raw pointer will be null
    ptr_stu->SetCollage("computr network");
    std::cout << ptr_stu->GetCollege() << std::endl;

    auto share_stu = std::make_shared<Student>("114", "1919810");
    auto share_stu_1(share_stu);
    share_stu_1->SetCollage("communication engineering");
    std::cout << share_stu->GetCollege() << std::endl;
}

// make_unique (C++14) creates a unique poniter that manages a new object
// make_unique_for_overwrite (C++20)