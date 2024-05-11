#include "student.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"

struct student_t create_student(char *std_id, char *std_name, char *std_year, enum gender_t std_gender){
    struct student_t std;
    strcpy(std.id, std_id);
    strcpy (std.name, std_name);
    strcpy (std.year, std_year);
    std.gender = std_gender;
    std.dorm = NULL;
    return std;
    }

void student_print_detail(struct student_t *_student, unsigned short int _size){
    for(int i = 0 ; i<_size; i++){
        char dorm_name[15];
        if(_student[i].dorm == NULL) strcpy(dorm_name, "unassigned");
        else strcpy(dorm_name, _student[i].dorm->name);

        printf("%s|%s|%s|%s|%s\n", _student[i].id, _student[i].name, _student[i].year, gender_to_text (_student[i].gender), dorm_name);

    }
}

void student_print_all(struct student_t *_student, unsigned short int _size){
    for(int i = 0 ; i < _size; i++){
    printf("%s|%s|%s|%s\n", _student[i].id, _student[i].name, _student[i].year, gender_to_text (_student[i].gender));
    
    }
}

void assign_student(struct student_t *_student, struct dorm_t *_dorm, char *id, char *dorm_name)
{
    if (_dorm->capacity > _dorm->residents_num)
    {
        if (_dorm->gender == _student->gender)
        {
            _student->dorm = _dorm;
            _dorm->residents_num++;
        }
    }
}



