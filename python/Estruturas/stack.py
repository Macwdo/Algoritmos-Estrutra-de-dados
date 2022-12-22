class Stack:

    def __init__(self, stackRange):
        self.stackRange = stackRange or 5
        self.stack_ = []

    def push(self, number):
        if len(self.stack_) <= self.stackRange:
            self.stack_.append(number)
            return print(f"Adding in Stack {number}")
        else:
            return print(f"Your stack is Full")
    
    def pop(self):
        if len(self.stack_) <= 0:
            return print(f"Your stack is void")
        else:
            print(f"Deleting last item {self.stack_[-1]}")
            return self.stack_.pop()

    def show(self):
        return print(f"Your Stack {self.stack_}")