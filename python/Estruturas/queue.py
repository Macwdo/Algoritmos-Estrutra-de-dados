class Queue:

    def __init__(self, queueRange):
        self.queueRange = queueRange or 5
        self.queue_ = []

    def push(self, number):
        if len(self.queue_) <= self.queueRange:
            self.queue_.append(number)
            return print(f"Adding in Queue {number}")
        else:
            return print(f"Your queue is full")
    
    def pop(self):
        if len(self.queue_) <= 0:
            return print("Your queue is void")
        else:
            print(f"Deleting {self.queue_[0]} from your queue")
            return self.queue_.pop(0)

    def show(self):
        return print(f"Your Queue {self.queue_}")