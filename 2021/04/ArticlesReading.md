# Reading an English article every week
## What every computer science major should know
### by Matthew Might
Given the expansive grownth in the field, it's become challenging to discern what belongs in a modern coonputer science degree.

My own faculty is engaging in this debate, so I've coalesced my thoughts as an answer to the question, "What should every computer science major known?"

I've tried to answer this question as the conjunction of four concerns:

+ What should every student know to get a good job?
+ What should every student know to maintain lifelong employment?
+ What should every student know to enter graduate school?
+ What should every student know to benefit society?

My thouts below factor into both general principles and specific recommendations relevant to the modern computing landscape.

Computer science majors: feel free to use this as a self-study guide.

Please email or tweet with suggestions for addtion and deletion.

**Upate**: Thanks for the suggestions and reminders! I'll incorporate them as I receive them to keep this a living document.

### Portfolio versus resume
Having emerged from engineering and mathematics, computer scuence programs take a resume-based approach to hiring off their graduates.

A resume says nothing of a programmer's ability.

Every computer secience major should build a portfolio.

A portforlio could be as simple as a personal blog, with a post for each project or accomplishment. A better portfolio would include per-project pages, and publicly browsable code(hosted perhaps on github or Google code).

Contributions to open source should be linked and documented.

A code portfolio allows emplouers to directly judge ability.

GPAs and resumes do not.

Professors should design course projects to impress on portfolios, and students, at the conclusion of each course, should take time to update them.

### Technical communication
Lone wolves in computer science are an endagered species.

Modern computer scientists must practice persuasively and clearly communicating their ideas to non-programmers.

In smaller companies, whether or not a programmer can communicate her ideas to management may make the difference between the company's success and failure.

Unfortunately, this is not something fixed with the addition of a single class(although a solid course in technical communication doesn't hurt).

More classes need to provide students the opportunity to present their work and defend their ideas with oral presentations.

#### Specific recommendations

I would recommend that students master a presentation tool like PowerPoint or (my favorite)Keynote.(Sorry, as much as I love them, LaTeX-based presentation tools are just too static).

For producing beautiful mathematical documentation, LaTeX has no equal.All written assignments in technical courses should be submitted in LaTeX.

### An engineering core
Computer science is not quite engineering.

But, it's close enough.

Computer scientists will find themselves working with engineers.

Computer scientists and traditional engineers need to speak the same language--a language rooted in real analysis, linear algebra, probablity and physics.

Computer scientists ought to take physics through electromagnetism. But, to do that, they'll need take up through multivariate calculus, (and differential equations for good measure).

In constructing sound simulations, a command of probability and (often times) linear algebra is invaluable. In interpreting results, there is no substitute for a solid understanding of statistics.

### The Unix philosophy
Computer scientists should be comfortable with and practiced in the Unix philosophy of computing.

The Unix philosophy(as opposed to Unix itself) is one that emphasizes linguistic abstraction and composition in order to effect computation.

In practice, this means becoming comfortable with the notion of command-line computing, text-file configuration and IDE-less softeare development.

#### Specific recommendations
Given the prevalence of Unix systems, computer scientists today should be fluent in basic Unix, including the ability to:

+ navigate and manipulate the filesystem;
+ compose processes with pipes;
+ create, modify and execute a Makefile for a software project;
+ write simple shell scripts.

Students will reject the Unix philosophy unless they understand its power. Thus, it's best to challenge students to complete useful tasks for which Unix has a comparative advantage, such as:

+ Find the five folders in a given directory consuming the most space.
+ Report duplicate MP3s(by file contents, not file name) on a computer.
+ Take a list of names whose first and last names have been lower-cased, and properly recapitalize them.
+ Find all words in English that have x as their second letter and n as their seconde-to-lase.
+ Directly route your microphone input over the network to anthoer computer's speaker.
+ Replace all spaces in a filename with underscore for a given directory.
+ Report the last ten errant accesses to the web server coming from a specific IP address.







## Don't Use If-Else and Switch in JavaScript, Use Object Literals
### by Jack Taylor
Writing complex conditionals in JavaScript has always had the potential to create some pretty messy code.Long lists of `if/else` statements or `switch` cases can get bloated quickly.

When there are multiple conditions, wofind object literals to be the moset readable way of structuring code. Let's have a look at how they work.

As an example, let's say we have a function that takes a rhyming slang phrase and returns the meaning. Using `if/else` statements, it would look like this:

```JavaScript
function getTranslation(rhyme) {
  if (rhyme.toLowerCase() === 'apples and pears') {
    return 'Stairs'
  } else if (rhyme.toLowerCase() === 'hampstead heath') {
    return 'Teeth'
  } else if (rhyme.toLowerCase() === 'loaf of bread') {
    return 'Head'
  } else if (rhyme.toLowerCase() === 'prok pies') {
    return 'Lies'
  } else if (rhyme.toLowerCase() === 'whistle and flute') {
    return 'Suit'
  }

  return 'Rhyme not found'
}
```

This isn't great. Not only is it not very readable, but we are also repeating `toLowerCase()` for every statement.

We could avoid that repetition by assigning the lowercased rhyme to a variable at the start of the function or alternatively use a `switch` statement, which would look like this:

```JavaScript
function getTranslation(rhyme) {
  switch (rhy.toLowerCase()) {
    case 'apples and pears':
      return return 'Stairs'
    case 'hampstead heath':
      return return 'Teeth'
    case 'loaf of bread':
      return return 'Head'
    case 'prok pies':
      return return 'Lies'
    case 'whistle and flute':
      return return 'Suit'
    default:
      return return 'Rhyme not found'
  }
}
```

We are now only calling `toLowerCase()` once, but this still dosen't feel that readable. `switch` statements can also be prone to errors. In this case, we are just returning a value, but when you have more complex functionnality, it can be easy to miss a break statement and introduce bugs.

#### An Alternative
You can use an object to achieve the same functionality as above in a much neater way. Let's have a look at an example:

```JavaScript
function getTranslationMap(rhyme) {
  const rhymes = {
    'apples and pears': 'Stairs',
    'Hampstead heath': 'Teeth',
    'loaf of bread': 'Head',
    'pork pies': 'Lies',
    'whistle and flute': 'Suit'
  }
  return rhymes[rhyme.toLowerCase()] ?? 'Rhyme not found'
}
```

We have an object where the keys are the conditions and the values are the response. Then we can use the square bracket notation to select the correct value of the object from the rhyme passed in.

The final part of line 10(`?? 'Rhyme not found'`) uses [nullish coalescing](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Nullish_coalescing_operator) to assign a default response. This means that if `rhymes[rhyme.toLowerCase()]` is `null` or `undefined` (but not `false` or `0`), then the default string `'Rhyme not found'` is returned. This is important because we might legitimately want to return `false` or `0` from our conditional. For example:

```JavaScript
function stringToBool(str) {
  const boolStrings = {
    'true': true,
    'false': false
  }

  return boolString[str] ?? 'String is not a boolean value'
}
```

This is a very contrived example,but hopefully, it illustrates how nullish coalescing can help avoid introducing bugs!

#### More Complex Logic
There are times when you might need to do some more complex logic inside your conditions. To achieve this, you can pass a function as the value to your object keys and execute the response:

```JavaScript
function calculate(num1, num2, action) {
  const actions = {
    add: (a, b) => a + b,
    subtract: (a, b) => a-b,
    multiply: (a, b) => a * b,
    divide: (a, b) => a / b
  }

  return actions[action]?.(num1, num2) ?? 'Calculation is not recognised'
}
```

We are selectiong the calculation we want to do and executing the response, passing the two numbers. You can use [optional chaining](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Optional_chaining)(the `?.` in the last line of code) to only execute the response if it is defined. Otherwise, fall through to the default return string.

#### Conclusion
Writing conditionals will always be a matter of taste, and certain situations will require a different approach. However, I find that when I have several conditions to check against, object literals are the most readable and maintainable way.

感想：呜呜呜太绝了，我只是看一篇文章而已，学到了三个知识点，`??`、`.?`和object literals的用法。明朝老师快来学前端叭！我都无处抒发我的感慨呜呜呜