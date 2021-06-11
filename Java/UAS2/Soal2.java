class TimeOfDay {
	int h, m, s;

	/**
	* Menciptakan objek TimeOfDay jika diketahui detik ke-berapa sejak tengah malam (00:00:00).
	*
	* @param seconds harus berada di antara 0 (00:00:00) dan 86399 (23:59:59), inklusif [precondition]
	* @throws IllegalArgumentException jika input tidak valid
	*
	* 0≤h≤23; 0≤m,s≤59; h*3600 + m*60 + s == seconds [post-condition]
	*/
	public TimeOfDay(int seconds) throws IllegalArgumentException { /* 0 */

		if (seconds < 0 || seconds > 86399) { /* 1 */
			throw new IllegalArgumentException();
		}
		h = seconds / 3600;
		int rem = seconds % 3600;
		m = rem / 60;
		s = rem % 60;

		assert (h >= 0 && h <= 0 && m >= 0 && m <= 59 && s >= 0 && s <= 59) : "Program invalid";/* 2 */

	}

	@Override
	public String toString() {
		return String.format("%02d:%02d:%02d", h, m, s);
	}
}

public class Main {
	public static void main(String[] args) {

		try {/* 3 */

			TimeOfDay t = new TimeOfDay(0); // yaitu pukul 00:00:00
			System.out.println(t);
			t = new TimeOfDay(77777); // yaitu pukul 21:36:17
			System.out.println(t);
			t = new TimeOfDay(99999); // yaitu pukul 27:46:39??
			System.out.println(t);

		} catch (IllegalArgumentException e) {/* 4 */

			System.out.println("Input tidak valid!");

		} /* 5 */

	}
}