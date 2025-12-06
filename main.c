#include <stdio.h>
#include <math.h>

// Simple haptic feedback simulation: generate torque pulses based on sine wave amplitude
int main() {
    double amplitude = 1.0;
    double frequency = 5.0; // Hz
    double duration = 2.0; // seconds
    double dt = 0.1; // time step in seconds
    for (double t = 0.0; t <= duration; t += dt) {
        double torque = amplitude * sin(2 * M_PI * frequency * t);
        // Trigger a haptic pulse when torque exceeds threshold
        if (fabs(torque) > 0.8) {
            printf("Haptic pulse at t=%.1f s: torque %.2f Nm\n", t, torque);
        }
    }
    return 0;
}
