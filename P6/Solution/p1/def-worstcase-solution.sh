# Replace the following reference string with the answer for part P6.1a
# Note: As there are no constraints given, a reference string which never accesses a page a second time
# will have page faults on all accesses and thus be worst case for any policy
export WORST20ALL=1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20

# Replace the following reference strings with the answers for part P6.1b
# Basically, with cache size X and X+1 pages, always accessing the page currently not in the cache will be worst-case
export WORST5FIFO=1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5
export WORST5LRU=1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5
export WORST5MRU=1,2,3,4,5,4,5,4,5,4,5,4,5,4,5,4,5,4,5,4
