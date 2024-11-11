class TextEditor:
    def __init__(self):
        self.text = ""
        self.history = []

    def push_change(self, new_text):
        self.history.append(self.text)
        self.text = new_text
        print(f"Text updated: '{self.text}'")

    def undo(self):
        if not self.history:
            print("No changes to undo.")
            return
        self.text = self.history.pop()
        print(f"Undo performed. Current text: '{self.text}'")

    def display_text(self):
        print(f"Current text: '{self.text}'")

editor = TextEditor()
editor.push_change("Hello")
editor.push_change("Hello, World!")
editor.display_text()
editor.undo()
editor.display_text()
editor.undo()
editor.display_text()
