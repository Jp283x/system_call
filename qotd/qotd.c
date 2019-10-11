#include <linux/kernel.h>
#include <linux/random.h>

const int quoteCounter = 6;

const char* quote[] = {"\"Closing your eyes isn't going to change anything. Nothing's going to disappear just because you can't see what's going on... Keep your eyes wide open. Only a coward closes his eyes.\" - Haruki Murakami",
"\"Unexpressed emotions will never die. They are buried alive and will come forth later in uglier ways.\" - Sigmund Freud",
"\"I like nonsense, it wakes up the brain cells.\" - Dr Seuss",
"\"I fall in love with myself, and I want someone to share it with me. And I want someone to share it with me. And I want someone to share me, with me.\" - Eartha Kitt",
"\"I'm not sure why I'm infatuated with death. My imagination is surely an aggravation of threats that can come about 'cause the tongue is mighty powerful. And I can name a list of your favorites that probably vouch. Maybe 'cause I'm a dreamer and sleep is the cousin of death.\" - Kendrick Lamar",
"\"I never understood Planned Parenthood, 'cause I never met nobody planned to be a parent in the hood.\" - Kanye West"};

asmlinkage long sys_qotd(void){

	int num;
	get_random_bytes(&num, sizeof(num));
	if(num < 0){
		num = -num;
	}

	printk(quote[num % quoteCounter]);
	return 0;
}
	
