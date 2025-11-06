def emergencyMode():
    pass
    
    return 

def normalCycle():
    
    return 0

# Main
running = True
n = 4
i = 0
a = [""] * (n)

a[0] = "N"
a[1] = "S"
a[2] = "E"
a[3] = "W"
print("=== SMART EMERGENCY VEHICLE PRIORITY SYSTEM ===")
print("Sensors: RFID/IR modules detect siren & distance automatically.")
while running == True:
    print("Enter detected vehicle direction (N/E/S/W or X to exit): ")
    signalDirection = input()
    if signalDirection == "X" or signalDirection == "x":
        print("=== INITIATING NORMAL TRAFFIC CYCLE ===")
        for i in range(0, 3 + 1, 1):
            print("Direction " + a[i] + " → GREEN")
            print("Other directions → RED")
            print("(Signal ON for 60 seconds...)")
        print("🛑 System shutting down safely.")
        running = False
    else:
        print("Emergency message recieved ? (Yes/No)")
        registered = input()
        print("Enter distance from signal (in meters): ")
        distance = int(input())
        print("Siren ON? (1 for Yes / 0 for No): ")
        sirenOn = int(input())
        if sirenOn == 1 or registered == "Yes" or registered == "YES":
            print(" EMERGENCY VEHICLE DETECTED FROM " + signalDirection)
            print("Setting signal to GREEN " + signalDirection)
            print("ALL OTHER DIRECTIONS SET TO RED")
            print("STIMULATING GREEN LIGHT FOR 1 MINUTE")
            for time in range(60, 0 - 1, -1):
                print("" + str(time))
            print("Emergency cleared. Restoring normal cycle")
            for i in range(0, 3 + 1, 1):
                if a[i] != signalDirection:
                    print("Direction " + a[i] + " → GREEN")
                    print("Other directions → RED")
                    print("(Signal ON for 60 seconds...)")
        else:
            print("=== INITIATING NORMAL TRAFFIC CYCLE ===")
            for i in range(0, 3 + 1, 1):
                print("Direction " + a[i] + " → GREEN")
                print("Other directions → RED")
                print("(Signal ON for 60 seconds...)")
