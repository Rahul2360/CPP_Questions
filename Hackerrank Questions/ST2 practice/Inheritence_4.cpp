Consider a class named Base having its data members as name and its roll number.A another class named Internal inherits this
class in public mode and having its data members as 4 subject marks as internal.Their is an independent class named External
having external marks of 4 subjects.The last class named Complete_Info being derived from External and Internal, calculates the
total of internal marks obtained by student as well as sum of external marks and grand total.

Generate a code to display the name ,roll_no,sum of internal marks,sum of external marks, grand total and Grade of student.
Grade can be calculated using following criteria.
Total_Marks     Grade
less than 40    R
41 to 60        C
61 - 80         B

For Example
Input:
Raj
1
2
1
1
1
5
5
5
4
Output:
Raj 1 5 19 24 R
Explanation:
Input Contains
NAME OF THE STUDENT
Raj
ROLL_NO
1
INTERNAL MARKS IN FOUR SUBJECTS
2
1
1
1
EXTERNAL MARKS IN FOUR SUBJECTS
4
Output contains
Name Roll_no Total _internal_ marks Total _external_ marks Total_marks Grade
Note: All elements in output are separated by space
