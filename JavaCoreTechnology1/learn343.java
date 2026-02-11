public class learn343 {
    //由于Java中都是类的操作方法,所以要初始化一个全局常量要以类初始化方法来
    static final double weight = 9.9;
    public static void main(String[] args) {
        //在main类中的,初始化此类中的常量,可以不用类的初始化方法
        final double length = 8.8;
        System.out.println(length*weight);
    }
}
