package one.digitalinnovation.gof.service.impl;

import one.digitalinnovation.gof.model.Address;
import one.digitalinnovation.gof.model.AddressRepository;
import one.digitalinnovation.gof.model.Client;
import one.digitalinnovation.gof.model.ClientRepository;
import one.digitalinnovation.gof.service.ClientService;
import one.digitalinnovation.gof.service.ViaCepService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.Optional;

@Service
public class ClientServiceImpl implements ClientService {

    @Autowired
    private ClientRepository clientRepository;
    @Autowired
    private AddressRepository addressRepository;
    @Autowired
    private ViaCepService viaCepService;
    @Override
    public Iterable<Client> searchAll() {
        return clientRepository.findAll();
    }

    @Override
    public Client searchById(Long id) {
        Optional<Client> client = clientRepository.findById(id);
        return client.get();

    }

    @Override
    public void insert(Client client) {
        String cep = client.getAddress().getCep();

        Address address = addressRepository.findById(cep).orElseGet( ( ) -> {
            Address newAddress = viaCepService.seeCep(cep);
            addressRepository.save(newAddress);
            return newAddress;
        });

        client.setAddress(address);
        clientRepository.save(client);
    }

    @Override
    public void put(Long id, Client client) throws Exception {
        if(this.searchById(id) != null)
            this.insert(client);
        else
            throw new Exception("An error occurred, this client not exists");
    }

    @Override
    public void delete(Long id) {
        clientRepository.deleteById(id);
    }
}
