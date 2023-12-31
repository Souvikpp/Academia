#ifndef CONFIG
#define CONFIG


#define INITIAL_PROMPT "Welcome to Academia Portal!\nLogin as\n1. Admin\t2. Faculty\t3. Student\nPress any other number to exit\nEnter the number corresponding to the choice!"

// ========== COMMON TEXT =============================

// LOGIN
#define LOGIN_ID "Enter your login ID"
#define PASSWORD "Enter your password \n# "
#define INVALID_LOGIN "The login ID specified doesn't exist!$"
#define INVALID_PASSWORD "The password specified doesn't match!$"
#define SALT_BAE "666"

// ERROR
#define STUDENT_ID_DOESNT_EXIT "No student could be found for the given ID"
#define STUDENT_LOGIN_ID_DOESNT_EXIT "No student could be found for the given login ID"
#define ERRON_INPUT_FOR_NUMBER "It seems you have passed a sequence of alphabets when a number was expected or you have entered an invalid number!\nYou'll now be redirected to the main menu!^"
#define INVALID_MENU_CHOICE "It seems you've made an invalid menu choice\nYou'll now be redirected to the main menu!^"
#define FACULTY_LOGIN_ID_DOESNT_EXIT "No faculty could be found for the given login ID"


// ========== ADMIN SPECIFIC TEXT======================

// ADMIN CREDENTIALS
#define ADMIN_LOGIN_ID "admin"
#define ADMIN_PASSWORD "66Z8KDiDV9.3c" // "admin"

// LOGIN WELCOME
#define ADMIN_LOGIN_WELCOME "Welcome Admin!"
#define ADMIN_LOGIN_SUCCESS "Admin login successful"

// ADMIN MENU
#define ADMIN_MENU "1. Add Student\n2. Add Faculty\n3. Update Student Details\n4. Update Faculty Details\nPress any other key to logout"

// ADD STUDENT
#define ADMIN_ADD_STUDENT_NAME "Enter Student's Name"
#define ADMIN_ADD_STUDENT_EMAIL "Enter Students's Email ID"
#define ADMIN_ADD_STUDENT_AUTOGEN_LOGIN "Login ID for the student is : "
#define AUTOGEN_PASSWORD "student" // append to end of next string macro
#define ADMIN_ADD_STUDENT_AUTOGEN_PASSWORD "Password for the student is : "

// MODIFY STUDENT INFO
#define ADMIN_MOD_STUDENT_ID "Enter the ID of the student who's information you want to edit"
#define ADMIN_MOD_STUDENT_MENU "Enter information to modify\n1. Name 2. Email 3. Password 4. StudentStatus \nPress any other key to cancel"
#define ADMIN_MOD_STUDENT_NEW_NAME "Enter updated value for name?"
#define ADMIN_MOD_STUDENT_NEW_EMAIL "Enter updated value for email?"
#define ADMIN_MOD_STUDENT_NEW_PASSWORD "Enter updated value for password\n#"
#define ADMIN_MOD_STUDENT_NEW_STATUS "Enter updated value for student status \n 1. Activate 2. Deactivate"


// ADD FACULTY
#define ADMIN_ADD_FACULTY_NAME "Enter Faculty's Name"
#define ADMIN_ADD_FACULTY_EMAIL "Enter Faculty's Email ID?"
#define ADMIN_ADD_FACULTY_AUTOGEN_LOGIN "Login ID for the Faculty is : "
#define AUTOGEN_FACULTY_PASSWORD "faculty" // append to end of next string macro
#define ADMIN_ADD_FACULTY_AUTOGEN_PASSWORD "Password for the Faculty is : "

// MODIFY FACULTY INFO
#define ADMIN_MOD_FACULTY_ID "Enter the ID of the Faculty who's information you want to edit"
#define ADMIN_MOD_FACULTY_MENU "Enter information would you like to modify\n1. Name 2. Email 3. Password\nPress any other key to cancel"
#define ADMIN_MOD_FACULTY_NEW_NAME "Enter updated value for name"
#define ADMIN_MOD_FACULTY_NEW_EMAIL "Enter the updated value for email"
#define ADMIN_MOD_FACULTY_NEW_PASSWORD "What's the updated value for password\n#"

#define ADMIN_MOD_SUCCESS "The required modification was successfully made!\nYou'll now be redirected to the main menu!^"
#define ADMIN_LOGOUT "Logging out!$"


// ========== FACULTY SPECIFIC TEXT===================

// LOGIN WELCOME
#define FACULTY_LOGIN_WELCOME "Welcome Faculty! Enter your credentials!"
#define FACULTY_LOGIN_SUCCESS "Welcome Faculty!"

#define FACULTY_LOGOUT "Logging out!$"

// FACULTY MENU
#define FACULTY_MENU "1. Add Course\n2. Remove Offered Course\n3. View Enrollments in Course\n4. Change Password\n5. Change enrollment capacity\nPress any other key to logout"

// ADD COURSE
#define FACULTY_ADD_COURSE_NAME "Enter course's name"
#define FACULTY_REMOVE_COURSE "Enter course ID to be removed"
#define FACULTY_VIEW_COURSE_ENROLLENT "Enrollments in the course are"
#define FACULTY_ADD_COURSE_SUCCESS "Course has been created successfully! Course Name: "
#define FACULTY_ADD_COURSE_LIMIT "Enter the maximum no of students that can enroll"
#define FACULTY_ERROR_COURSE_LIMIT "Invalid Input: Given value is greater than maximum allowed^"

// UPDATE ENROLLMENT COURSE
#define FACULTY_UPDATE_COURSE "What is the course ID?"
#define FACULTY_UPDATE_COURSE_CAPACITY "What is the new capacity?"
#define FACULTY_UPDATE_COURSE_INVALID "The entered capacity is not vaild.!^"
#define FACULTY_UPDATE_COURSE_SUCCESS "Capacity has been updated successfully!"

// REMOVE COURSE
#define FACULTY_ERROR_COURSE_INVALID "The faculty is not teaching the course associated with the provided course ID.!^"
#define FACULTY_REMOVE_COURSE_SUCCESS "Course has been removed successfully!"

// ========== COURSE SPECIFIC TEXT===================

#define COURSE_MAX_SEATS 10

// ========== STUDENT SPECIFIC TEXT===================

// LOGIN WELCOME
#define STUDENT_LOGIN_WELCOME "Welcome student! Enter your credentials!"
#define STUDENT_LOGIN_SUCCESS "Welcome student!"

#define STUDENT_LOGOUT "Logging out!$"

// STUDENT MENU
#define STUDENT_MENU "1. Enroll Course\n2. Unenroll Course\n3. View Enrolled Courses\n4. Change Password\nPress any other key to logout"

// ENROLL COURSE
#define STUDENT_ENROLL_COURSE "Enter courseID?"
#define STUDENT_UNENROLL_COURSE "Enter course ID to be removed?"
#define STUDENT_VIEW_ENROLLENT "Enrollments in the course are"
#define STUDENT_ENROLL_COURSE_SUCCESS "You have successfully enrolled in the course!"
#define STUDENT_UNENROLL_COURSE_SUCCESS "You have been successfully removed from the course enrollment.!"
#define STUDENT_ERROR_COURSE_INVALID "Please enter a valid course ID!^"
#define STUDENT_ERROR_COURSE_FULL "Sorry, You cannot register because the course is already at maximum capacity!^"
#define STUDENT_VIEW_COURSES "Courses enrolled are: "
#define STUDENT_ERROR_COURSE_TAKEN "You have already registered to the course.^"


// ========== PASSWORD SPECIFIC TEXT===================

#define PASSWORD_CHANGE_OLD_PASS "Enter your old password"
#define PASSWORD_CHANGE_OLD_PASS_INVALID "The entered password doesn't seem to match with the old password"
#define PASSWORD_CHANGE_NEW_PASS "Enter the new password"
#define PASSWORD_CHANGE_SUCCESS "Password successfully changed!^"
#define PASSWORD_CHANGE_FAIL "Failed to update Password. Please try again.^"

// ============= DB ====================

#define COURSE_FILE "DB/course.txt"
#define STUDENT_FILE "DB/student.txt"
#define FACULTY_FILE "DB/faculty.txt"

#endif