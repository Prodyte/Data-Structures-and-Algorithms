class TrieNode:
    def __init__(self):
        self.isWord = False
        self.children = {}

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        curr = self.root
        for w in word:
            if w not in curr.children:
                curr.children[w] = TrieNode()
            curr = curr.children[w]
        curr.isWord = True

    def search(self, word):
        curr = self.root
        for w in words:
            if w not in curr.children:
                return False
            curr = curr.children[w]
        return r.isWord

    def startWith(self, prefix):
        curr = self.root
        for w in prefix:
            if w not in curr.chilren:
                return False
            cutt = curr.children[w]
        return True 
