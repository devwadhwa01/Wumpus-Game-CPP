Wampus game by Dev Wadhwa


Programming Language: C++


Program is dynamic (i.e. each time a new problem is generated)

![Wampus World Image](https://user-images.githubusercontent.com/73272997/114269647-df8d9f00-9a25-11eb-8f8d-eff8b0de1b95.png)

Rules that the game is governed by:

1. Block 1,1 must always be safe and it must not contain gold.
2. User imput is taken for the location of Wampus (block 1,1 must never be the location of Wampus).
3. The number of pits is randomly generated (i.e. 1 or 2 or 3) and then placed randomly in the blocks.
4. The gold is placed randomly in one of the blocks, in such a way that there is no pit and no Wampus in that square.


PEAS values for the agent:

Performance measure:
- gold +1000, death -1000
- -1 per step, -10 for using the arrow
Environment:
- Blocks adjacent to Wumpus are smelly
- Blocks adjacent to pit are breezy
- Glitter iff gold is in the same square
- Shooting kills Wumpus if you are facing it
- Shooting uses up the only arrow
- Agent picks up gold if in same square
Actuators: 
- Left turn, Right turn, Forward, Grab, Shoot
Sensors: 
- Stench, Breeze, Glitter, Bump, Scream



Output contains the following information:

a. Block numbers where pits, Wampus and gold are located.

b. Path from block 1,1 to the gold if the agent is successful in finding it out. If it fails to do so, then the block number where the agent ended up is mentioned.

c. Total reward points earned (or lost) by the agent.
