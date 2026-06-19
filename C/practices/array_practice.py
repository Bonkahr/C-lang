import random

student_choices = [random.randint(1, 5) for i in range(20)]
print(f"Student choices: {student_choices}")

average = sum(student_choices) / 20

match (round(average)):

    case 1:
        print("Students choice: 1", "Rating: Awful!")
    case 2:
        print("Students choice: 2", "Rating: Poor!")
    case 3:
        print("Students choice: 3", "Rating: Good!")
    case 4:
        print("Students choice: 4", "Rating: Great!")
    case 5:
        print("Students choice: 5", "Rating: Awesome!")
    case _:
        print("Student choice: UNDICIDED")
