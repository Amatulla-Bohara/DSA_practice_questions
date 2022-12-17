class Solution {
    private final String[] OPERS = new String[]{"+", "-", "*", "/"};
    public int evalRPN(String[] tokens) {
        HashSet<String> operators = new HashSet<>();
        for (String s : OPERS) {
            operators.add(s);
        }
        Stack<Integer> stack = new Stack<>();
        for (String t : tokens) {
            if (!operators.contains(t)) {
                stack.push(Integer.valueOf(t));
            } else {
                int o1 = stack.pop();
                int o2 = stack.pop();
                int temp = 0;
                if (t.equals("*")) temp = o1 * o2;
                if (t.equals("-")) temp = o2 - o1;
                if (t.equals("+")) temp = o1 + o2;
                if (t.equals("/")) temp = o2 / o1;
                stack.push(temp);
            }
        }
        return stack.isEmpty() ? 0 : stack.pop();
    }
}
