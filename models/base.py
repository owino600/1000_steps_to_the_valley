#!/usr/bin/python3
"""defines a base model class"""
class base:
    """class model
    for all the projects in this task

    """
    __nb_objects = 0

    def __init__(self, id=None):
        """initialize a new base"""

        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
