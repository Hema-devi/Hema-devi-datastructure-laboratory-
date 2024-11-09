class Node:
    def __init__(self, song):
        self.song = song
        self.next = None

class Playlist:
    def __init__(self):
        self.head = None

    def add_song(self, song):
        new_node = Node(song)
        if not self.head:
            self.head = new_node
        else:
            temp = self.head
            while temp.next:
                temp = temp.next
            temp.next = new_node
        print(f"Added: {song}")

    def remove_song(self, song):
        if not self.head:
            print("Playlist is empty.")
            return
        if self.head.song == song:
            self.head = self.head.next
            print(f"Removed: {song}")
            return
        temp = self.head
        while temp.next and temp.next.song != song:
            temp = temp.next
        if temp.next:
            temp.next = temp.next.next
            print(f"Removed: {song}")
        else:
            print(f"{song} not found in the playlist.")

    def display_playlist(self):
        if not self.head:
            print("Playlist is empty.")
            return
        print("\n--- Playlist ---")
        temp = self.head
        while temp:
            print(temp.song)
            temp = temp.next
        print("-----------------")

playlist = Playlist()
playlist.add_song("Song A")
playlist.add_song("Song B")
playlist.add_song("Song C")
playlist.display_playlist()
playlist.remove_song("Song B")
playlist.display_playlist()
