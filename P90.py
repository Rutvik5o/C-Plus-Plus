#Method Resoultion Order -> MRO

#Multiple Inheritence

#Parent 1->
#Parent 2->
#Child

class Human:

    def __init__(self,num_heart):

        print("Calling init from Human")

        self.num_eyes=2

        self.num_noes=1

        self.num_heart=num_heart

    def eat(self):

        print("I can eat")

    def work(self):

        print("I can Work")



class Male:

    def __init__(self,name):

        print("Calling init from Male")

        self.name=name

    def flirt(self):

        print("I can flirt")

    def work(self):

        print("I can code")


class Boy(Human,Male):

    def __init__(self,name,heart,language):

        Human.__init__(self,heart)

        Male.__init__(self,name)

        self.language=language

    def sleep(self):

        print("I can sleep")

    def work(self):

        print("I can test")

    def display(self):

        print(f"Hi i am {self.name} and I work on {self.language}.")


boy_1=Boy("Hexin",1,"Python")

#print(boy_1.num_nose)

#print(boy_1.num_heart)

#print(boy_1.language)

boy_1.display()

#Male.work(boy_1)