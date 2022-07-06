let avgScore
let test1, test2, test3
const num_tests = 3
const pi = Math.PI

test1 = Number(prompt("Enter the score on the first test: "))
test2 = Number(prompt("Enter the score on the second test: "))
test3 = Number(prompt("Enter the score on the third test: "))

avgScore = ((test1 + test2 + test3) / num_tests)
alert('Your Average Score: ' + avgScore)
