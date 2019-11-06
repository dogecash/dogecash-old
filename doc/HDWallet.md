
# HD Wallets
===========

Since version 4.1.0, DogeCash Core has included an implementation of BIP39/BIP44 compatible hierarchical deterministic (HD) key generation. This functionality is only available from the command line by specifying the usehd option when starting DogeCash Core for the first time. Use this function with care, since the mnemonic seed and keys will be stored in plain text until you specify a wallet passphrase. Note that the wallet passphrase is different to the mnemonic passphrase, which is often also referred to as the “25th word” or “extension word”. The wallet passphrase encrypts the wallet file itself, while the mnemonic passphrase is used to specify different derivation branches from the same mnemonic seed.

We will use the Windows GUI wallet in this example, but the commands are similar if using dogecash-qt or dogecashd on other operating systems. Enter the following command to start on HD wallet creation.

`dumpwallet "filenamehere"`

This will give you an output directory you need to copy and save for the next steps.

Close wallet. Save wallet.dat and then delete the copy in your %APPDATA% or .dogecash directory.

To get started with a randomly generated HD wallet seed and no mnemonic passphrase:

`dogecash-qt.exe --usehd=1`

A new HD wallet will be generated and DogeCash Core will display a warning informing you that you must encrypt your wallet after verifying it works correctly. Open the console from Tools -> Debug console or issue the following RPC command from dogecash-cli to view the mnemonic seed:

`dumphdinfo`

DogeCash Core will display the HD seed in both hexadecimal and as a BIP39 mnemonic. 

Next, We will need to import our keys into this new wallet. In debug console enter in, with the quotation marks.

`importwallet "pathyousavedhere"`

This will take some time if you have a larger wallet.dat. Importing keys you will not see your old transactions but you will see you coins upon completion.



To restore an existing HD wallet, or define your own separately generated mnemonic and/or passphrase, ensure no wallet.dat file exists in the datadir and enter the following command:

`dogecash-qt.exe --usehd=1 --mnemonic="enter mnemonic" --mnemonicpassphrase="optional mnemonic passphrase"`

The HD wallet will be restored and your balance will appear once sync is complete.
