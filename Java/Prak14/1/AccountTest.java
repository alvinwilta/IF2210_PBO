public class AccountTest {
    public AccountTest() {
        // Tidak melakukan apa-apa
    }

    public void test() {
        // Melakukan tes terhadap method transfer.
        // Asumsikan method lainnya benar.

        // Melakukan transfer dari akun rekening ini ke akun rekening other
        // serta menambahkan numOfTransaction.
        // Jika saldo (balance) rekening ini kurang dari amount, lemparkan
        // InvalidAmountException
        // Asumsi amount selalu > 0
        Account a = AccountFactory.withBalance(20);
        Account b = AccountFactory.withBalance(40);
        try {
            a.transfer(b, 20);
        } catch (InvalidAmountException e) {
            assert false;
        }
        assert a.getBalance() == 0;
        assert b.getBalance() == 60;
        assert a.getNumOfTransaction() == 1;
        assert b.getNumOfTransaction() == 1;
        try {
            a.transfer(b, 20);
        } catch (InvalidAmountException e) {
            assert true;
        }
        assert a.getBalance() == 0;
        assert b.getBalance() == 60;
        assert a.getNumOfTransaction() == 1;
        assert b.getNumOfTransaction() == 1;

    }
}