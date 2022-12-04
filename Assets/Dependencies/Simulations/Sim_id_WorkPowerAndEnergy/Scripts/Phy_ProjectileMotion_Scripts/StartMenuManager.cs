using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class StartMenuManager : MonoBehaviour
    {
        public GameObject sceneLoaderImage;
        public GameObject lHand;
        public GameObject rHand;
        //public SteamVR_Action_Boolean mainmenu;
        bool first = true;
 

        // Start is called before the first frame update
        void Start()
        {
            transform.position = Camera.main.transform.position + new Vector3(0f, 0f, -2.4f);
        }

        public void LoadPhyLevel()
        {
            StartCoroutine(LoadYourAsyncScene());
            //SceneManager.LoadScene("PhysicsMixed");
            print("sceneLoaed");
            GetComponent<Canvas>().enabled = false;
        }

        IEnumerator LoadYourAsyncScene()
        {
            // The Application loads the Scene in the background as the current Scene runs.
            // This is particularly good for creating loading screens.
            // You could also load the Scene by using sceneBuildIndex. In this case Scene2 has
            // a sceneBuildIndex of 1 as shown in Build Settings.

            sceneLoaderImage.SetActive(true);
            yield return new WaitForSeconds(2f);
            AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("PhysicsMixed");
            // Wait until the asynchronous scene fully loads
            while (!asyncLoad.isDone)
            {
                yield return null;
            }
        }

    }
}
