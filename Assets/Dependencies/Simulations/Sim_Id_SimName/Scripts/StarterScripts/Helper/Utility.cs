using UnityEngine;

namespace Inspirit.Simulations.Template
{
    public class Utility
    {

        public static T GetOrCreateAnInstance<T>() where T : MonoBehaviour
        {
            var objectInscene = GameObject.FindObjectOfType<T>();
            if (objectInscene == null)
            {
                var newObject = new GameObject(nameof(T));
                objectInscene = newObject.AddComponent<T>();
            }
            return objectInscene;
        }

        public static void Copy_Parent_Pos_Rot(Transform source,Transform destination)
        {
            destination.parent = source.parent;
            destination.localPosition = source.localPosition;
            destination.localRotation = source.localRotation;
        }

        public static void Copy_Parent_Pos_Rot_Scale(Transform source, Transform destination)
        {
            destination.parent = source.parent;
            destination.localPosition = source.localPosition;
            destination.localRotation = source.localRotation;
            destination.localScale = source.localScale;
        }

        public static void Copy_Pos_Rot(Transform source, Transform destination)
        {
            destination.position = source.position;
            destination.rotation = source.rotation;
        }

        public static void Copy_Pos_Rot_Scale(Transform source, Transform destination)
        {
            destination.position = source.position;
            destination.rotation = source.rotation;
            destination.localScale = source.localScale;
        }
    }
}