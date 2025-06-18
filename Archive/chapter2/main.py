import sys

def main(lines):
    # This is sample code to use stdin and stdout.
    # Edit or remove this code as you like.
    part = lines[0].split()
    n = int(part[0])
    m = int(part[1])
    part = lines[1].split()
    res = set()
    for i in range(m):
        res.add(int(part[i]))
    
    q = int(lines[2])
    result = []
    for i in range(q):
        part = lines[3+i].split()
        le =int(part[0])
        ri =int(part[1])
        

        res_in_range = []
        for r in res:
            if le <= r <= ri:
                res_in_range.append(r)

        if not res_in_range:
            result.append(str(le))
            continue

        res_in_range.sort()
        if res_in_range[0] > le:
            result.append(str(le))
            continue
        
        prev = le
        found = False 
        for seat in res_in_range:
            if seat > prev:
                result.append(str(prev))
                found = True
                break
            prev = seat +1

        if not found: 
            if prev <= ri:
                result.append(str(prev))
            else:
                result.append("-1")

    return result

if __name__ == '__main__':
    lines = []
    for l in sys.stdin:
        lines.append(l.rstrip('\r\n'))
    result = main(lines)
    for result_0 in result:
        print(result_0)
