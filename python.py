survey = int(input())
cnt0 = 0
cnt1 = 0
if (survey % 2) == 0:
    exit()
else:
    for i in range(survey):
        vote = int(input())
        if vote == 1:
             cnt1 += 1
        elif vote == 0:
              cnt0 += 1
if (cnt1 > cnt0):
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")