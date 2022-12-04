using UnityEngine;


namespace Inspirit.Simulations.Template
{
    /// <summary>
    /// Multiple instance of this class can exist but the Instance variable will refer to most recently instantiated object.
    /// <para>Authors: Rohith</para>
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public abstract class StaticInstanceBase<T> : MonoBehaviour where T : MonoBehaviour
    {
        public static T Instance { get; private set; }

        protected virtual void Awake() => Instance = this as T;

        protected virtual void OnApplicationQuit()
        {
            if (Instance != null)
            {
                Instance = null;
                Destroy(gameObject);
            }
        }
    }

    /// <summary>
    /// Only one instance of this class will always exist.
    /// <para>Authors: Rohith</para>
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public abstract class SingeltonBase<T> : StaticInstanceBase<T> where T : MonoBehaviour
    {
        protected override void Awake()
        {
            if (Instance != null)
            {
                Destroy(gameObject); // This script execution will terminate upon destroying.
            }
            base.Awake();
        }
    }

    /// <summary>
    /// It will create a lazy instance when any other object tries to get the Instance
    /// <para>Authors: Rohith</para>
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public abstract class LazySingeltonBase<T> : MonoBehaviour where T : MonoBehaviour
    {
        private static T _instance;
        public static T Instance
        {
            get
            {
                if (_instance == null)
                {
                    _instance = Utility.GetOrCreateAnInstance<T>();
                }
                return _instance;
            }
        }
    }

   
}