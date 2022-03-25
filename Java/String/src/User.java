public class User {
        private boolean its_logged;
        private String FirstName;
        private String LastName;

        public User(){
            FirstName = "Not";
            LastName = "Defined";

            its_logged = false;
        }
        public User(String FirstName, String LastName){
            this.FirstName = FirstName;
            this.LastName = LastName;

            its_logged = true;
        }

        public void set_logged(boolean logged){
            its_logged = logged;
        }

        public void set_FirstName(String name){
            FirstName = name;
        }
        public void set_LastName(String name){
            LastName = name;
        }
        public String get_FullName(){
            return FirstName + " " + LastName;
        }
        public boolean get_Logged(){
            return its_logged;
        }
}
