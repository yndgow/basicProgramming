// 성적 데이터 클래스
class ScoreData{
    String name;
    int kScore;
    int mScore;
    int totScore;
    double avgScore;

    /* 
     * 생성자 함수
     * 명시적으로 안만들면 기본생성자가 자동으로 객체를 생성할 때 만들어진다.
     * 기본생성자는 클래스명() {} 비어있는 코드블럭이다.
     * 클래스와 이름이 같고 반환값이 없습니다. void라는 뜻이 아님
     * 처음부터 반환형식이 없음.
     */
    public ScoreData(/* 입력변수는 필요하면 사용가능 */) {
        name = "";
        kScore = 0;
        mScore = 0;
        totScore = 0;
        avgScore = 0.0;
    }

    public ScoreData(String name, int kScore, int mScore) {
        this.name = name;
        this.kScore = kScore;
        this.mScore = mScore;
        this.totScore = kScore + mScore;
        this.avgScore = this.totScore / 2;
    }

    // 메소드 : 클래스 안에서만 사용하여 데이터변수(=멤버변수)의 내용을 바꾸는 함수를 특히 메소드라고 합니다.
    void println(){
        
        System.out.println("   이름 : " + this.name);
        System.out.println("   국어성적 : " + this.kScore);
        System.out.println("   수학성적 : " + this.mScore);
        System.out.println("   총점 : " + this.totScore);
        System.out.println("   평균 : " + this.avgScore);
    }
}

public class score2 {
    public static void main(String[] args) {
        ScoreData std1 = new ScoreData("홍길동", 85, 96);        
        ScoreData std2 = new ScoreData("황진이", 100, 100);        
        std1.println();
        System.out.println("------------------------------------");
        std2.println();
    }

    
}
