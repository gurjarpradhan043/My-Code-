import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;

public class LocationFinder {

    // Replace with your own API key from ipstack
    private static final String API_KEY = "2149bf00991cdb1772bc74a1e7a05790"; // <--- PUT YOUR API KEY HERE
    private static final String GEO_API_URL = "http://api.ipstack.com/check?access_key=" + API_KEY;

    public static void main(String[] args) {
        try {
            // Create a URL object with the API URL
            @SuppressWarnings("deprecation")
            URL url = new URL(GEO_API_URL);

            // Open a connection to the URL
            HttpURLConnection connection = (HttpURLConnection) url.openConnection(); 
            connection.setRequestMethod("GET");

            // Get the response code
            int responseCode = connection.getResponseCode();
            if (responseCode == HttpURLConnection.HTTP_OK) { // success
                BufferedReader in = new BufferedReader(new InputStreamReader(connection.getInputStream()));
                String inputLine;
                StringBuffer response = new StringBuffer();

                // Read the response from the API
                while ((inputLine = in.readLine()) != null) {
                    response.append(inputLine);
                }
                in.close();

                // Print the full JSON response
                System.out.println("Response: " + response.toString());
            } else {
                System.out.println("GET request failed");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

