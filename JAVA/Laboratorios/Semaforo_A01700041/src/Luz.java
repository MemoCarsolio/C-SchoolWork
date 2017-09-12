 import java.util.concurrent.TimeUnit;

public class Luz {
	private boolean on_off;
	private String color;

	public Luz(){
		
		on_off = true;
		color = "RED";
	}
	public Luz(boolean on_off, String color){
		
		this.on_off = on_off;
		this.color = color;		
		
	}
	
	public void buttonPress()throws InterruptedException{
		System.out.println("Wait 3 seconds and it will change to RED");
		TimeUnit.SECONDS.sleep(3);
		
		if (color.equals("YELLOW")){
			color = "RED";
		}
		else if (color.equals("GREEN")){
			color = "RED";
		}	
	}
	
	public void colorSwitch(){
		
		if(color.equals("RED")){
			color = "YELLOW";
			
		}
		else if (color.equals("YELLOW")){
			color = "GREEN";
		}
		else if (color.equals("GREEN")){
			color = "RED";
		}
		
	}
	
	public boolean getOn(){
		return on_off;
		
	}
	public void setOn(boolean on_off){
		this.on_off = on_off;
	}

	public String getColor(){
		return color;
	}
	
	public void streetLight() throws InterruptedException{
		int count;
		
		
		for(count = 0; count <=9; count++){
			if(on_off){
				if(color.equals("RED")){
					System.out.println("Street is on: RED");
					TimeUnit.SECONDS.sleep(3);
					colorSwitch();
				}
				else if(color.equals("YELLOW")){
					System.out.println("Street is on: YELLOW");
					TimeUnit.SECONDS.sleep(1);
					colorSwitch();
				}
				else if(color.equals("GREEN")){
					System.out.println("Street is on: GREEN");
					TimeUnit.SECONDS.sleep(3);
				colorSwitch();
				}
			}
			else{
				System.out.println("The Street light is off");
				TimeUnit.SECONDS.sleep(3);
				
			}
			System.out.print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n‌​\n\n\n\n");
		}
		
	}
		
	
}