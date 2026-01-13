#include <stdio.h>

float snek_score(int num_files, int num_contributors, int num_commits, float avg_bug_criticality) {
        int project_size = num_files * num_commits;
        int project_complexity = project_size + num_contributors;
        return (float)project_complexity * avg_bug_criticality;
}



int main() {
    int project = snek_score(5,5,5,5.0);
    printf("Project total: %d", project);

}