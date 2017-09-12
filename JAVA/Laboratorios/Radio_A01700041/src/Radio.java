
public class Radio {
	private boolean on;
	private String frq;
	private double sta;
	private int vol;
	
	//Constructor Default
	public Radio(){
		on = true;
		frq = "AM";
		sta = 1080;
		vol = 0;
	}
	
	public Radio(boolean on, String frq, double sta, int vol){
		
		this.on = on;
		this.frq = frq;
		this.sta = sta;
		this.vol = vol;
			
	}
	
	
	public String toSting(){
		String estado = "";
		
		if(on){
			estado = "\nRadio is ON in the " + frq + " station "+ sta;
			estado = estado + " and the volume is " + vol;
			
		}
		else {
			estado = "Radio is OFF";
		}
			
		return estado;
		
	}
	
	public void prenderApagar(){
		on = !on;
	}
	
	
	
	//setters void
	
	public void setOn(boolean on){
		this.on = on;		
	}
	
	public boolean getOn(){
		return on;
	}
	
	public void setFrq(String frq){
		
		if (on){
			
			if (frq.equals("AM") || frq.equals("FM")){
			
				this.frq = frq;
			}		
		}
	}
		
	public String getFrq(){
		return frq;
	}
	
	public void setSta(double sta){
		if(on){
			if(frq.equals("AM")){
				if(sta >= 540 && sta <=1600){
					this.sta = sta;
				}
			}
			else if(frq.equals("FM")){
				if(sta >= 88 && sta <=108){
					this.sta = sta;
				}
			}
		}
	}
	public double getSta(){
		return sta;
	}
	
	public void setVol(int vol){
		if(on){
			if(vol>=0 && vol <=10){
				this.vol=vol;
			}
		}
	}
	public int getVol(){
		return vol;
	}
}
