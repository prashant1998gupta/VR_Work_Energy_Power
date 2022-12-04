using UnityEngine;

namespace Inspirit.Simulations.Template
{
    public class AudioManager : SingeltonBase<AudioManager>
    {
        private AudioSource audioSource;

        protected override void Awake()
        {
            base.Awake();
            audioSource = GetComponent<AudioSource>();
        }

        public void SetVolume(float value)
        {
            audioSource.volume = value;
        }

        public void PlayAudioClip(AudioClip audioClip)
        {
            audioSource.PlayOneShot(audioClip);
        }
    }
}
