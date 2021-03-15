
#include <alsa/asoundlib.h>



int main()
{
	int val;

	printf("\n ALSA library version: %s\n", SND_LIB_VERSION_STR);


	printf("\n PCM stream  types: \n");
	for(val = 0; val <= SND_PCM_ACCESS_LAST; val++)
	{
		printf("%s \n",snd_pcm_stream_name((snd_pcm_stream_t)val));
	}

	printf("\n PCM access types:\n");
	for (val = 0; val <= SND_PCM_ACCESS_LAST; val++)
	{
		printf("%s\n", snd_pcm_access_name((snd_pcm_access_t)val));
	}

	printf("\n PCM formats:\n");
	for (val = 0; val <= SND_PCM_FORMAT_LAST; val++)
	{
		if (snd_pcm_format_name((snd_pcm_format_t)val) != NULL)
		{
			printf("  %s (%s)\n",
					snd_pcm_format_name((snd_pcm_format_t)val),
					snd_pcm_format_description((snd_pcm_format_t)val));
		}
	}

  	printf("\n PCM subformats:\n");
	for (val = 0; val <= SND_PCM_SUBFORMAT_LAST;val++)
	{
		printf("  %s (%s)\n",
				snd_pcm_subformat_name((snd_pcm_subformat_t)val),
				snd_pcm_subformat_description((snd_pcm_subformat_t)val));
	}


	printf("\n PCM states:\n");
	for (val = 0; val <= SND_PCM_STATE_LAST; val++)
	{
		printf("%s\n", snd_pcm_state_name((snd_pcm_state_t)val));
	}
}