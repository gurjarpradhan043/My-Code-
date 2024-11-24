package StudyAssistant;

public class Task {
    private String name;
    private String deadline;
    private boolean isCompleted;
    
    public Task(String name, String deadline ) {
        this.name = name;
        this.deadline = deadline;
        this.isCompleted = false;
    }
    public String getName() {
        return name;
    }
    public String getDeadline() {
        return deadline;
    }
    public boolean getIsCompleted() {
        return isCompleted;
    }
    public void setCompleted(boolean completed) {
        isCompleted = completed;
    }
    public boolean isCompleted() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'isCompleted'");
    }
}