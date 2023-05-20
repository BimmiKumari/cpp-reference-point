 stack<char> st ; 
        for (int i = 0 ;  i< s.length() ; i++)
        {
            char ch = s[i];

            // if opening bracket then push into the stack 
            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch) ; 
            }

            else {
                // if a closing bracket then we compare with the top of the stack 
                // while comparing with top of stack we have 2 cases 
                // the stack can be empty or the stack is not empty 
                if (!st.empty())
                {
                    char top = st.top() ;
                    if ((ch == ')' && top == '(') || 
                        (ch == '}' && top == '{') ||
                        (ch == ']' && top == '[')) 
                        {
                            // if matches then pop 
                            st.pop() ;
                        }
                        else 
                   [200~ stack<char> st ;
			        for (int i = 0 ;  i< s.length() ; i++)
					        {
							            char ch = s[i];

								                // if opening bracket then push into the stack
										//             if (ch == '(' || ch == '{' || ch == '[')
										//                         {
										//                                         st.push(ch) ;
										//                                                     }
										//
										//                                                                 else {
										//                                                                                 // if a closing bracket then we compare with the top of the stack
										//                                                                                                 // while comparing with top of stack we have 2 cases
										//                                                                                                                 // the stack can be empty or the stack is not empty
										//                                                                                                                                 if (!st.empty())
										//                                                                                                                                                 {
										//                                                                                                                                                                     char top = st.top() ;
										//                                                                                                                                                                                         if ((ch == ')' && top == '(') ||
										//                                                                                                                                                                                                                 (ch == '}' && top == '{') ||
										//                                                                                                                                                                                                                                         (ch == ']' && top == '['))
										//                                                                                                                                                                                                                                                                 {
										//                                                                                                                                                                                                                                                                                             // if matches then pop
										//                                                                                                                                                                                                                                                                                                                         st.pop() ;
										//                                                                                                                                                                                                                                                                                                                                                 }
										//                                                                                                                                                                                                                                                                                                                                                                         else
										//                                                                                                                                                                                                                                                                                                                                                                                            ^
										//                                                                                                                                                                                                                                                                                                                                                                                            ~
										//
