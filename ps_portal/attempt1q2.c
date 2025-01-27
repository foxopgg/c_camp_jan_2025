#include <stdio.h>
int main() {
    int startHour, startMinute;
    int endHour, endMinute;
    int diffHour, diffMinute;
    scanf("%d %d", &startHour, &startMinute);
    scanf("%d %d", &endHour, &endMinute);
    int startTotalMinutes = startHour * 60 + startMinute;
    int endTotalMinutes = endHour * 60 + endMinute;
    int diffTotalMinutes = endTotalMinutes - startTotalMinutes;
    if (diffTotalMinutes < 0) {
        diffTotalMinutes += 24 * 60;
    }
    diffHour = diffTotalMinutes / 60;
    diffMinute = diffTotalMinutes % 60;
    printf("%d hour %02d minute\n", diffHour, diffMinute);
    return 0;
}
