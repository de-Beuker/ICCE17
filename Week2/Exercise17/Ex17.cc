int main(int argc, char *argv[])
    {
        int nr;
        int idx;
        bool next;
        string reverse;

        cout << argv[0] << "'s arguments:\n";
    
        for (idx = 0; idx < argc; ++idx)
            cout << argv[idx] << endl;

        do
        {
            cout << "Enter the number of a command line argument to "
                    "capitalize (or -1 to quit) ";
            cin >> nr;
            if (nr == -1)
                next = false;
            else
                capitalize(argv[nr]);
        }
        while (next);

        reverse = argv[0];

        for (int idx = 0; idx < reverse.length() / 2; ++idx)
            swap(reverse[idx], reverse[reverse.length() - 1 - idx]);

        cout << reverse << endl;
    }
