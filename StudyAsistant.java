package StudyAssistant;
import java.util.ArrayList;
import java.util.Scanner;

public class StudyAsistant {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Task> taskList = new ArrayList<>();

        System.out.println("Welcome to your Personalized Study Assistant!");

        while(true ) {
            System.out.println("\nMenu:");
            System.out.println("1. Add Taks");
            System.out.println("2. View Tasks"); 
            System.out.println("Complete Tasks");
            System.out.println("Exit");

            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice ) {
                case 1: 
                System.out.println("Enter Taks Name:"); 
                String name = scanner.nextLine();
                System.out.println("Enter Deadline"); 
                String deadline = scanner.nextLine();
                taskList.add(new Task(name, deadline));
                System.out.println("Task Added! "); 
                break;
                
                case 2:
                    System.out.println("Tasks:");
                    for (int i = 0; i < taskList.size(); i++) {
                        Task task = taskList.get(i);
                        System.out.println((i + 1) + ". " + task.getName() + " - " + task.getDeadline() + (task.isCompleted() ? " (Completed)" : ""));
                    }
                    break;

                    case 3:
                        System.out.println("Which task number have you completed?");
                        int taskNumber = scanner.nextInt();
                        taskList.get(taskNumber -1).setCompleted(true);
                        System.err.println("Task marked as completed!");
                        break;

                        case 4:
                        System.out.println("Exiting...");;
                        return;

                        default : 
                        System.out.println("Invalid Option. Please try again.");

                        

                }

            }
        }
    }

